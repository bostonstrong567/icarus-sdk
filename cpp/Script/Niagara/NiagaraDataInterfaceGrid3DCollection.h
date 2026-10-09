// /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
// Derives from: UNiagaraDataInterfaceGrid3D > UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x180, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceGrid3DCollection.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
    UPROPERTY(EditAnywhere) int32 NumAttributes;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x0108, size 0x20
    UPROPERTY(EditAnywhere) ENiagaraGpuBufferFormat OverrideBufferFormat;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOverrideFormat : 1;  // 0x0129, mask 0x01
protected:
    TMap<unsigned __int64,FGrid3DCollectionRWInstanceData_GameThread *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned __int64,FGrid3DCollectionRWInstanceData_GameThread *,0> > SystemInstancesToProxyData_GT;  // 0x0130, not reflected
public:
    UFUNCTION(BlueprintCallable) bool FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) bool FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* dest, int32 AttributeIndex);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void GetRawTextureSize(UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GetTextureSize(UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);  // parameters 0x14

    // Virtual functions that start here:
    //   FillRawVolumeTexture, FillVolumeTexture, GetRawTextureSize, GetTextureSize
};
