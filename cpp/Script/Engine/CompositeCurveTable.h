// /Script/Engine.CompositeCurveTable
// Derives from: UCurveTable > UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Engine/CompositeCurveTable.h

UCLASS(MinimalAPI)
class UCompositeCurveTable : public UCurveTable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UCurveTable*> ParentTables;  // 0x00A0, size 0x10
    UPROPERTY(Transient) TArray<UCurveTable*> OldParentTables;  // 0x00B0, size 0x10
    uint8 : 1 bIsLoading;  // 0x00C0, not reflected
    uint8 : 1 bUpdatingParentTables;  // 0x00C0, not reflected
};
