// /Script/Engine.BillboardComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Engine/Classes/Components/BillboardComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UBillboardComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Sprite;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsScreenSizeScaled : 1;  // 0x0458, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenSize;  // 0x045C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float U;  // 0x0460, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UL;  // 0x0464, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float V;  // 0x0468, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VL;  // 0x046C, size 0x4

    UFUNCTION(BlueprintCallable) void SetSprite(UTexture2D* NewSprite);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSpriteAndUV(UTexture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);  // parameters 0x10

    // Virtual functions that start here:
    //   SetSprite, SetSpriteAndUV, SetUV
};
