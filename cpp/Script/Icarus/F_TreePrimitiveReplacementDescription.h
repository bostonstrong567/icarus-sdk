// /Script/Icarus.TreePrimitiveReplacementDescription
// size 0x1C, declared in Icarus/Source/Icarus/Objects/TreePrimitiveComponent.h

USTRUCT()
struct FTreePrimitiveReplacementDescription
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETreePrimitiveDetachContext DetachContext;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETreePrimitiveItemReplaceMethod ReplaceMethod;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle ReplaceRewardsRowHandle;  // 0x0004, size 0x18
};
