// /Script/Engine.DataTableCategoryHandle
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/DataTable.h

USTRUCT()
struct FDataTableCategoryHandle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDataTable* DataTable;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ColumnName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowContents;  // 0x0010, size 0x8
};
