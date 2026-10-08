// /Script/Niagara.NiagaraDataInterfaceExport
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x68, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceExport.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding CallbackHandlerParameter;  // 0x0038, size 0x20
    UPROPERTY(EditAnywhere) ENDIExport_GPUAllocationMode GPUAllocationMode;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere) int32 GPUAllocationFixedSize;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere) float GPUAllocationPerParticleSize;  // 0x0060, size 0x4

    // Virtual functions that start here:
    //   ExportData, StoreData
};
