// /Script/Icarus.ValidHitQuery
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ValidHitQueriesLibrary.generated.h

USTRUCT()
struct FValidHitQuery : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle HitSource;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle HitTarget;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FValidHitTypesRowHandle HitSuccessType;  // 0x0048, size 0x18
};
