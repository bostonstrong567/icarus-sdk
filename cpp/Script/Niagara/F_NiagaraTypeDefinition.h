// /Script/Niagara.NiagaraTypeDefinition
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraTypeDefinition
{
public:
    UPROPERTY(EditAnywhere) UObject* ClassStructOrEnum;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) uint16 UnderlyingType;  // 0x0008, size 0x2
private:
    int16 Size;  // 0x000A, not reflected
    int16 Alignment;  // 0x000C, not reflected
};
