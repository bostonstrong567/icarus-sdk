// /Script/Engine.DataTableRowHandle
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/DataTable.h

USTRUCT()
struct FDataTableRowHandle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDataTable* DataTable;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0008, size 0x8
};
