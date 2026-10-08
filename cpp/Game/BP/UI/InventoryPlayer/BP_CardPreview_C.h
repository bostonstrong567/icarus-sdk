// /Game/BP/UI/InventoryPlayer/BP_CardPreview.BP_CardPreview_C
// Derives from: ABP_ActorPreview_C > AActor > UObject
// size 0x278, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_CardPreview_C : public ABP_ActorPreview_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Card;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_CardPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetCardRotation(FRotator Rotation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateCard(UMaterialInterface* Material, FText Text);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
