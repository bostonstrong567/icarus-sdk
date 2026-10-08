// /Script/Icarus.BTComposite_SequenceLoop
// Derives from: UBTComposite_Sequence > UBTCompositeNode > UBTNode > UObject
// size 0xA0, declared in Icarus/Source/Icarus/AI/BT/Composites/BTComposite_Sequenceloop.h

UCLASS()
class UBTComposite_SequenceLoop : public UBTComposite_Sequence
{
public:
    UPROPERTY(EditAnywhere) int32 LoopCount;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) int32 LoopDeviation;  // 0x0094, size 0x4
    UPROPERTY() int32 CurrentLoopCount;  // 0x0098, size 0x4
    UPROPERTY() int32 ActiveLoopCount;  // 0x009C, size 0x4

    // Virtual functions that start here:
    //   GetLoopCount
};
