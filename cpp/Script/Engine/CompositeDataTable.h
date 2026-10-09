// /Script/Engine.CompositeDataTable
// Derives from: UDataTable > UObject
// size 0xD8, declared in Engine/Source/Runtime/Engine/Classes/Engine/CompositeDataTable.h

UCLASS(MinimalAPI)
class UCompositeDataTable : public UDataTable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UDataTable*> ParentTables;  // 0x00B0, size 0x10
    UPROPERTY(Transient) TArray<UDataTable*> OldParentTables;  // 0x00C0, size 0x10
    uint8 : 1 bIsLoading;  // 0x00D0, not reflected
    uint8 : 1 bShouldNotClearParentTablesOnEmpty;  // 0x00D0, not reflected
    uint8 : 1 bUpdatingParentTables;  // 0x00D0, not reflected
};
