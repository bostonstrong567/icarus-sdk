// /Script/Engine.EngineShowFlagsSetting
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponent.h

USTRUCT()
struct FEngineShowFlagsSetting
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ShowFlagName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enabled;  // 0x0010, size 0x1
};
