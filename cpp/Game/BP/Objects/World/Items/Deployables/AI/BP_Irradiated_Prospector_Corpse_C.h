// /Game/BP/Objects/World/Items/Deployables/AI/BP_Irradiated_Prospector_Corpse.BP_Irradiated_Prospector_Corpse_C
// Derives from: ABP_GOAP_Corpse_C > AIcarusGOAPCorpseBase > AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Irradiated_Prospector_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi4;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi3;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi2;  // 0x07B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi1;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Lo1;  // 0x07C8, size 0x8
    UPROPERTY() float FadeLight_Alpha_29193A864A0320384B896492622325AE;  // 0x07D0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> FadeLight__Direction_29193A864A0320384B896492622325AE;  // 0x07D4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* FadeLight;  // 0x07D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* MatID1;  // 0x07E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Irradiated_Prospector_Corpse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void FadeLight__FinishedFunc();
    UFUNCTION() void FadeLight__UpdateFunc();
    UFUNCTION(BlueprintCallable) void IsSkeletonUpdated();
    UFUNCTION(BlueprintCallable) void OnSkinnedStateUpdated();
    UFUNCTION(BlueprintCallable) void Populate_Contents(float Multiplier, AIcarusPlayerCharacter* Player, bool ForcePopulateCorpse);  // parameters 0x11, named "Populate Contents"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateCosmeticMaterials();
};
