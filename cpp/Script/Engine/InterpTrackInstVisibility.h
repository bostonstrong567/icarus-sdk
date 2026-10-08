// /Script/Engine.InterpTrackInstVisibility
// Derives from: UInterpTrackInst > UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstVisibility.h

UCLASS()
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EVisibilityTrackAction> Action;  // 0x0028, size 0x1
    UPROPERTY() float LastUpdatePosition;  // 0x002C, size 0x4
};
