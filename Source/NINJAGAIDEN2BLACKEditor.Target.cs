// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class NINJAGAIDEN2BLACKEditorTarget : TargetRules
{
	public NINJAGAIDEN2BLACKEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "NINJAGAIDEN2BLACK" } );
	}
}
