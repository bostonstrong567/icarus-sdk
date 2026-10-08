// /Game/BP/Objects/World/Items/Deployables/LandingPad/BP_Advanced_Exotic_Delivery_Interface.BP_Advanced_Exotic_Delivery_Interface_C
// Derives from: ABP_Exotic_Delivery_Interface_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Advanced_Exotic_Delivery_Interface_C : public ABP_Exotic_Delivery_Interface_C, public ICargoLandingPadSnapInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LandingPoint;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A3;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A2;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A3;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B2;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_B1;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A1;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_A;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCargoLandingPadComponent* CargoLandingPad;  // 0x07D8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Advanced_Exotic_Delivery_Interface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Generate_Spawn_Pod_Location(ABP_Transport_Pod_Base_C* TransportPod);  // parameters 0x8, named "Generate Spawn Pod Location"
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetSnapPoint(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsEdenPad() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
