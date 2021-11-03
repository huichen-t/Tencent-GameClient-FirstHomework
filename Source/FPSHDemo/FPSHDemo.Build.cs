// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPSHDemo : ModuleRules
{
	public FPSHDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
