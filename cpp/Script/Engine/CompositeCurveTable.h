// /Script/Engine.CompositeCurveTable
// Derives from: UCurveTable > UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Engine/CompositeCurveTable.h

UCLASS(MinimalAPI)
class UCompositeCurveTable : public UCurveTable
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UCurveTable*> ParentTables;  // 0x00A0, size 0x10
    UPROPERTY(Transient) TArray<UCurveTable*> OldParentTables;  // 0x00B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bIsLoading;  // 0x00C0, protected
    uint8 : 1 bUpdatingParentTables;  // 0x00C0, protected
};
