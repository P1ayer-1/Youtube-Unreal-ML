// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YoutubeDemoV2 : ModuleRules
{
	public YoutubeDemoV2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
