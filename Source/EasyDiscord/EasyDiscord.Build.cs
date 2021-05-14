// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class EasyDiscord : ModuleRules
{
	public EasyDiscord(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;


		////////////////////////////////////////////////////////////////////////////////////////////////
		// CHECK IF DISCORD GAME SDK SOURCE DIRECTORY AND SDK LIBRARY EXISTS, IF NOT STOP COMPILATION //
		////////////////////////////////////////////////////////////////////////////////////////////////

		if (Directory.Exists(SDKDir) == false)
		{
			Directory.CreateDirectory(SDKDir);

			throw new BuildException("GameSDK not detected. Directory Created at" + SDKDir + ". Please put the nessecary C++ files in this folder.");
		}	

		if (File.Exists(SDKLib) == false)
		{
			throw new BuildException("Discord Game SDK Library Not Accessible. Make sure it has been added to the right directory. Should be located at" + SDKLib + ".");
		}

		/////////////////////////////////////////////////////
		// ADD DISCORD GAME SDK SOURCE & LIBRARY TO LINKER //
		/////////////////////////////////////////////////////

		PublicIncludePaths.Add(SDKDir);

		PublicAdditionalLibraries.Add(SDKLib);		
				
		PublicDependencyModuleNames.Add("Core");

		PrivateDependencyModuleNames.AddRange(new string[]{"CoreUObject","Engine"});
		
	}

	private string SDKDir
	{
		get{ return Path.GetFullPath(Path.Combine(ModuleDirectory, "GameSDK/")); }
	} 
	private string SDKLib
	{
		get{ return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win64/discord_game_sdk.dll.lib")); }
	} 
}

