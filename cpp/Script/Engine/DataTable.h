// /Script/Engine.DataTable
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/DataTable.h

UCLASS(MinimalAPI)
class UDataTable : public UObject
{
public:
    UPROPERTY(EditAnywhere) UScriptStruct* RowStruct;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) uint8 bStripFromClientBuilds : 1;  // 0x0080, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIgnoreExtraFields : 1;  // 0x0080, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bIgnoreMissingFields : 1;  // 0x0080, mask 0x04
    UPROPERTY(EditAnywhere) FString ImportKeyField;  // 0x0088, size 0x10
protected:
    TMap<FName,unsigned char *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned char *,0> > RowMap;  // 0x0030, not reflected
private:
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnDataTableChangedDelegate;  // 0x0098, not reflected

    // Virtual functions that start here:
    //   AddRow, AddRowInternal, AllowDuplicateRowsOnImport, EmptyTable, GetNonConstRowMap, GetRowMap
    //   RemoveRow
};
