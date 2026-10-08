// /Script/Engine.KismetRenderingLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetRenderingLibrary.h

UCLASS(MinimalAPI)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32& Bone0, uint8& Weight0, int32& Bone1, uint8& Weight1, int32& Bone2, uint8& Weight2, int32& Bone3, uint8& Weight3);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static void ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UTextureRenderTarget2DArray* CreateRenderTarget2DArray(UObject* WorldContextObject, int32 Width, int32 Height, int32 Slices, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static UTextureRenderTargetVolume* CreateRenderTargetVolume(UObject* WorldContextObject, int32 Width, int32 Height, int32 Depth, TEnumAsByte<ETextureRenderTargetFormat> Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void EndDrawCanvasToRenderTarget(UObject* WorldContextObject, const FDrawToRenderTargetContext& Context);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FString FilePath, FString FileName);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, FString FilePath, FString FileName);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UTexture2D* ImportBufferAsTexture2D(UObject* WorldContextObject, const TArray<uint8>& Buffer);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static UTexture2D* ImportFileAsTexture2D(UObject* WorldContextObject, FString Filename);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32 Bone0, uint8 Weight0, int32 Bone1, uint8 Weight1, int32 Bone2, uint8 Weight2, int32 Bone3, uint8 Weight3);  // parameters 0x5C
    UFUNCTION(BlueprintCallable) static FColor ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FLinearColor ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FLinearColor ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static FColor ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, FString Name, TEnumAsByte<TextureCompressionSettings> CompressionSettings, TEnumAsByte<TextureMipGenSettings> MipSettings);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);  // parameters 0xA
};
