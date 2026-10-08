// /Script/Niagara.NiagaraDataInterfaceCamera
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCamera.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) int32 PlayerControllerIndex;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) bool bRequireCurrentFrameData;  // 0x003C, size 0x1
};
