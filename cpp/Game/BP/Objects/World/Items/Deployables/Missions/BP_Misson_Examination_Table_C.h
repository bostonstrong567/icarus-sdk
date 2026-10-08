// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Misson_Examination_Table.BP_Misson_Examination_Table_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x791, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Misson_Examination_Table_C : public ABP_DeployableContainerBase_C, public IBP_WeatherInteractable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CRE_Ape_Juvie;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DeployableSM2;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DeployableSM1;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSampleCollected SampleCollected;  // 0x0780, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bCanExtract;  // 0x0790, size 0x1

    UFUNCTION(BlueprintCallable) void Ash(float Intensity);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_Misson_Examination_Table(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExtractSample(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnHighlightChanges(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnProxyMeshVisibilityChanged(USceneComponent* Component, bool bIsNowVisible);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PlayItemAddedAudio(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Rain(int32 Millilitres);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SampleCollected__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Sand(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Snow(float Intensity);  // parameters 0x4
};
