// /Game/BP/Objects/World/Items/Deployables/Food/BP_Cake_Base.BP_Cake_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Cake_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ITM_Cake_Plate;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_8;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_7;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_6;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_5;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_4;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_3;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_2;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Piece_1;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemToGrant;  // 0x0778, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice1;  // 0x0790, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice2;  // 0x0791, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice3;  // 0x0792, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice4;  // 0x0793, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice5;  // 0x0794, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice6;  // 0x0795, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice7;  // 0x0796, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Slice8;  // 0x0797, size 0x1

    UFUNCTION(BlueprintCallable) void CheckCleanup();
    UFUNCTION(BlueprintCallable) void CreateOverflowBag(bool IncludeSelf, EIcarusActorDestroyReason DestroyReason);  // parameters 0x2
    UFUNCTION() void ExecuteUbergraph_BP_Cake_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_Slice1();
    UFUNCTION(BlueprintCallable) void OnRep_Slice2();
    UFUNCTION(BlueprintCallable) void OnRep_Slice3();
    UFUNCTION(BlueprintCallable) void OnRep_Slice4();
    UFUNCTION(BlueprintCallable) void OnRep_Slice5();
    UFUNCTION(BlueprintCallable) void OnRep_Slice6();
    UFUNCTION(BlueprintCallable) void OnRep_Slice7();
    UFUNCTION(BlueprintCallable) void OnRep_Slice8();
    UFUNCTION(BlueprintCallable) void SetCollisionForPiece(UPrimitiveComponent* Piece, bool PieceExists);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetPieceTaken(UStaticMeshComponent* Piece);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TakePiece(TArray<FName>& Tags, AActor* Interactor);  // parameters 0x18
    UFUNCTION(BlueprintCallable, NetMulticast) void TriggerAudio();
};
