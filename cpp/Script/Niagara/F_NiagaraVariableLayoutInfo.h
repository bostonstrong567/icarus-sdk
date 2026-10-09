// /Script/Niagara.NiagaraVariableLayoutInfo
// size 0x70, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataSet.h

USTRUCT()
struct FNiagaraVariableLayoutInfo
{
public:
    UPROPERTY() uint32 FloatComponentStart;  // 0x0000, size 0x4
    UPROPERTY() uint32 Int32ComponentStart;  // 0x0004, size 0x4
    UPROPERTY() uint32 HalfComponentStart;  // 0x0008, size 0x4
    UPROPERTY() FNiagaraTypeLayoutInfo LayoutInfo;  // 0x0010, size 0x60
};
