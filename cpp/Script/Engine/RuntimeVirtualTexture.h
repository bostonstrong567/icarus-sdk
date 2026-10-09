// /Script/Engine.RuntimeVirtualTexture
// Derives from: UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h

UCLASS()
class URuntimeVirtualTexture : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TileCount;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TileSize;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TileBorderSize;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERuntimeVirtualTextureMaterialType MaterialType;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bCompressTextures;  // 0x0035, size 0x1
    UPROPERTY(EditAnywhere) bool bClearTextures;  // 0x0036, size 0x1
    UPROPERTY(EditAnywhere) bool bSinglePhysicalSpace;  // 0x0037, size 0x1
    UPROPERTY(EditAnywhere) bool bPrivateSpace;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) bool bAdaptive;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere) bool bContinuousUpdate;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere) int32 RemoveLowMips;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureGroup> LODGroup;  // 0x0040, size 0x1
    UPROPERTY(Deprecated) int32 Size;  // 0x0044, size 0x4
    UPROPERTY(Deprecated) URuntimeVirtualTextureStreamingProxy* StreamingTexture;  // 0x0048, size 0x8
private:
    FRuntimeVirtualTextureRenderResource * Resource;  // 0x0050, not reflected
    FVector4[3] WorldToUVTransformParameters;  // 0x0060, not reflected
    FVector4 WorldHeightUnpackParameter;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPageTableSize() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSize() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTileBorderSize() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTileCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTileSize() const;  // parameters 0x4
};
