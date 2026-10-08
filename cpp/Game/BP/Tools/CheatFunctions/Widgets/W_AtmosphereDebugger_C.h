// /Game/BP/Tools/CheatFunctions/Widgets/W_AtmosphereDebugger.W_AtmosphereDebugger_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_AtmosphereDebugger_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AutoTransition;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceAC;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceCave;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceCF;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceDC;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceGL;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceGT;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceLC;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceTU;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BiomeInfluenceWL;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CurrentBiome;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* FilteredActionBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NewBiome;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SplineTransition;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TransitionValue;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2_C_1;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x02E8, size 0x8

    UFUNCTION() void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_W_AtmosphereDebugger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_AutoTransition();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceAC();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceCF();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceCave();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceDC();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceGL();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceGT();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceLC();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceTU();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_BiomeInfluenceWL();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_CurrentBiome();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_NewBiome();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_SplineTransition();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText Get_TransitionValue();  // parameters 0x18
};
