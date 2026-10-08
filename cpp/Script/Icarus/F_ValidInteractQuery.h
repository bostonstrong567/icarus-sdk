// /Script/Icarus.ValidInteractQuery
// size 0x70, declared in Icarus/Source/Icarus/Systems/ValidHitQuery/ValidInteractQuery.h

USTRUCT()
struct FValidInteractQuery : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Source;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Target;  // 0x0058, size 0x18
};
