// /Script/Engine.InterpTrackAnimControl
// Derives from: UInterpTrackFloatBase > UInterpTrack > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackAnimControl.h

UCLASS(MinimalAPI)
class UInterpTrackAnimControl : public UInterpTrackFloatBase
{
public:
    UPROPERTY(EditAnywhere) FName SlotName;  // 0x0090, size 0x8
    UPROPERTY() TArray<FAnimControlTrackKey> AnimSeqs;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere) uint8 bSkipAnimNotifiers : 1;  // 0x00A8, mask 0x01
};
