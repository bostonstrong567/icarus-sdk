// /Script/Icarus.BTComposite_SelectPseudoRandom
// Derives from: UBTCompositeNode > UBTNode > UObject
// size 0xB0, declared in Icarus/Source/Icarus/AI/BT/Composites/BTComposite_SelectPseudoRandom.h

UCLASS()
class UBTComposite_SelectPseudoRandom : public UBTCompositeNode
{
public:
    UPROPERTY() bool bAlreadyRan;  // 0x0090, size 0x1
    UPROPERTY() TArray<int32> PossibleChildren;  // 0x0098, size 0x10
    UPROPERTY() int32 LastChild;  // 0x00A8, size 0x4
};
