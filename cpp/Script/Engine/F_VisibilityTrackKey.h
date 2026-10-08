// /Script/Engine.VisibilityTrackKey
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVisibility.h

USTRUCT()
struct FVisibilityTrackKey
{
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EVisibilityTrackAction> Action;  // 0x0004, size 0x1
    UPROPERTY() TEnumAsByte<EVisibilityTrackCondition> ActiveCondition;  // 0x0005, size 0x1
};
