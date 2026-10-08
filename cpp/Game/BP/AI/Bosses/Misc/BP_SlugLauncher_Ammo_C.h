// /Game/BP/AI/Bosses/Misc/BP_SlugLauncher_Ammo.BP_SlugLauncher_Ammo_C
// Derives from: ASkeletalProjectile > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SlugLauncher_Ammo_C : public ASkeletalProjectile
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sluglauncher_FX;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> Colors;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> ProjectileMaterials;  // 0x05A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> RibbonMaterials;  // 0x05B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> ColorsOverwrite;  // 0x05C8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_SlugLauncher_Ammo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindAmmoType(UObject* Object, TEnumAsByte<ESlugLauncherAmmoType>& SlugAmmoType);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void OnProjectileDeactivated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
