// /Script/Niagara.NiagaraTypeLayoutInfo
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraTypeLayoutInfo
{
public:
    UPROPERTY() TArray<uint32> FloatComponentByteOffsets;  // 0x0000, size 0x10
    UPROPERTY() TArray<uint32> FloatComponentRegisterOffsets;  // 0x0010, size 0x10
    UPROPERTY() TArray<uint32> Int32ComponentByteOffsets;  // 0x0020, size 0x10
    UPROPERTY() TArray<uint32> Int32ComponentRegisterOffsets;  // 0x0030, size 0x10
    UPROPERTY() TArray<uint32> HalfComponentByteOffsets;  // 0x0040, size 0x10
    UPROPERTY() TArray<uint32> HalfComponentRegisterOffsets;  // 0x0050, size 0x10
};
