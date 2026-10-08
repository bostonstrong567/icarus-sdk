// /Script/Engine.DefaultPawn
// Derives from: APawn > AActor > UObject
// size 0x2A8, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/DefaultPawn.h

UCLASS(Config=Game)
class ADefaultPawn : public APawn
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BaseTurnRate;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BaseLookUpRate;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPawnMovementComponent* MovementComponent;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) USphereComponent* CollisionComponent;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UStaticMeshComponent* MeshComponent;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAddDefaultMovementBindings : 1;  // 0x02A0, mask 0x01

    UFUNCTION(BlueprintCallable) void LookUpAtRate(float Rate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MoveForward(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MoveRight(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MoveUp_World(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TurnAtRate(float Rate);  // parameters 0x4

    // Virtual functions that start here:
    //   LookUpAtRate, MoveForward, MoveRight, MoveUp_World, TurnAtRate
};
