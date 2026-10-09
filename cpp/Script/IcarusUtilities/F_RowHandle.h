// /Script/IcarusUtilities.RowHandle
// size 0x18, declared in Icarus/Source/IcarusUtilities/Public/RowHandle.h

USTRUCT()
struct FRowHandle : public FRowHandleInternal
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) TWeakObjectPtr<UIcarusDataTable> DataTablePtr;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName RowName;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FName DataTableName;  // 0x0010, size 0x8
};
