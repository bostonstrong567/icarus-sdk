// /Script/Engine.CurveTableRowHandle
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/CurveTable.h

USTRUCT()
struct FCurveTableRowHandle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveTable* CurveTable;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0008, size 0x8
};
