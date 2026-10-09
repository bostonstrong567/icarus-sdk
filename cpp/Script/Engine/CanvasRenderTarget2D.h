// /Script/Engine.CanvasRenderTarget2D
// Derives from: UTextureRenderTarget2D > UTextureRenderTarget > UTexture > UStreamableRenderAsset > UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/CanvasRenderTarget2D.h

UCLASS()
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnCanvasRenderTargetUpdate OnCanvasRenderTargetUpdate;  // 0x01A8, size 0x10
protected:
    UPROPERTY() TWeakObjectPtr<UWorld> World;  // 0x01B8, size 0x8
    UPROPERTY(Transient) bool bShouldClearRenderTargetOnReceiveUpdate;  // 0x01C0, size 0x1
public:
    UFUNCTION(BlueprintCallable) static UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(UObject* WorldContextObject, TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSize(int32& Width, int32& Height);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateResource();
};
