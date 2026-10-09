// /Script/Icarus.BTComposite_SequenceLoop_Scaled
// Derives from: UBTComposite_SequenceLoop > UBTComposite_Sequence > UBTCompositeNode > UBTNode > UObject
// size 0xB8, declared in Icarus/Source/Icarus/AI/BT/Composites/BTComposite_SequenceLoop_Scaled.h

UCLASS()
class UBTComposite_SequenceLoop_Scaled : public UBTComposite_SequenceLoop
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FScalingRulesEnum LoopCountScalingRule;  // 0x00A0, size 0x10
protected:
    UPROPERTY() AActor* OwningPawnReference;  // 0x00B0, size 0x8
};
