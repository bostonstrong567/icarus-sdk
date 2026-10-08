// /Game/UI/FContextImageConditions.FContextImageConditions
// size 0xA0

USTRUCT()
struct FContextImageConditions
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery ObjectQuery;  // 0x0000, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery HeldItemQuery;  // 0x0048, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Image;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequiresItem;  // 0x0098, size 0x1
};
