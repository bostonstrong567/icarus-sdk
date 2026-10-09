// /Script/Engine.AnimationRecordingSettings
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationRecordingSettings.h

USTRUCT()
struct FAnimationRecordingSettings
{
public:
    UPROPERTY(EditAnywhere) bool bRecordInWorldSpace;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bRemoveRootAnimation;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) bool bAutoSaveAsset;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) float SampleRate;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float Length;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ERichCurveInterpMode> InterpMode;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERichCurveTangentMode> TangentMode;  // 0x000D, size 0x1
    bool bCheckDeltaTimeAtBeginning;  // 0x000E, not reflected
    UPROPERTY(EditAnywhere) bool bRecordTransforms;  // 0x000F, size 0x1
    UPROPERTY(EditAnywhere) bool bRecordCurves;  // 0x0010, size 0x1
};
