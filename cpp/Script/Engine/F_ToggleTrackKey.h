// /Script/Engine.ToggleTrackKey
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackToggle.h

USTRUCT()
struct FToggleTrackKey
{
public:
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ETrackToggleAction> ToggleAction;  // 0x0004, size 0x1
};
