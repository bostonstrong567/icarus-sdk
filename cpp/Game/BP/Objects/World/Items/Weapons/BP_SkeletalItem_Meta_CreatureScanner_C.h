// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x608, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Meta_CreatureScanner_C : public ABP_SkeletalItem_Scanner_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HandheldScanner;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* FirstPersonTransforms;  // 0x05C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* ScreenWidget;  // 0x05C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FAISetupRowHandle AI;  // 0x05D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Scanned_Creature;  // 0x05E8, size 0x8, named "Scanned Creature"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<ECreatureScanState> ScanState;  // 0x05F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> IgnoredAISetups;  // 0x05F8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_AI();
    UFUNCTION(BlueprintCallable) void OnRep_ScanState();
    UFUNCTION(BlueprintCallable) void OnRep_Scanning();
    UFUNCTION(BlueprintCallable) void Play_Fish_Finder_Finish_Sound();  // named "Play Fish Finder Finish Sound"
    UFUNCTION(BlueprintCallable) void Play_Sonar_Sound();  // named "Play Sonar Sound"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Scan_Creature(AActor* ScannedCreature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Set_VFX_Color(FLinearColor In_Value);  // parameters 0x10, named "Set VFX Color"
    UFUNCTION(BlueprintCallable) void TriggerAudio();
    UFUNCTION(BlueprintCallable) void TriggerReset();
    UFUNCTION(BlueprintCallable) void ViewModeChanged(bool bIsThirdPerson);  // parameters 0x1
};
