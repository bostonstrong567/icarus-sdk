// /Script/Engine.InterpTrackInstToggle
// Derives from: UInterpTrackInst > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstToggle.h

UCLASS()
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ETrackToggleAction> Action;  // 0x0028, size 0x1
    UPROPERTY() float LastUpdatePosition;  // 0x002C, size 0x4
    UPROPERTY() uint8 bSavedActiveState : 1;  // 0x0030, mask 0x01
};
