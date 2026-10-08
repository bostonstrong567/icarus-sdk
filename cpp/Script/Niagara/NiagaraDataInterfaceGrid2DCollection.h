// /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
// Derives from: UNiagaraDataInterfaceGrid2D > UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x1C0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceGrid2DCollection.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x00F8, size 0x20
    UPROPERTY(EditAnywhere) ENiagaraGpuBufferFormat OverrideBufferFormat;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOverrideFormat : 1;  // 0x0119, mask 0x01
    UPROPERTY(Transient) TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;  // 0x0170, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned __int64,FGrid2DCollectionRWInstanceData_GameThread *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned __int64,FGrid2DCollectionRWInstanceData_GameThread *,0> > SystemInstancesToProxyData_GT;  // 0x0120, protected

    UFUNCTION(BlueprintCallable) bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* dest, int32 AttributeIndex);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void GetRawTextureSize(UNiagaraComponent* Component, int32& SizeX, int32& SizeY);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetTextureSize(UNiagaraComponent* Component, int32& SizeX, int32& SizeY);  // parameters 0x10

    // Virtual functions that start here:
    //   FillRawTexture2D, FillTexture2D, GetRawTextureSize, GetTextureSize
};
