// /Script/Icarus.FlagsMultiRowHandle
// size 0x18, declared in Icarus/Source/Icarus/IcarusGenerated/Flags/FlagsMultiRowHandle.h

USTRUCT()
struct FFlagsMultiRowHandle : public FMultiRowHandle
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) EFlagsTableType DataTableName;  // 0x0010, size 0x1
};
