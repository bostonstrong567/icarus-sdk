// /Script/AIModule.BTFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTFunctionLibrary.h

UCLASS()
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void ClearBlackboardValue(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void ClearBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSubclassOf<UObject> GetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 GetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x3C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key);  // parameters 0x3C
    UFUNCTION(BlueprintCallable, BlueprintPure) static UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsBool(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsClass(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, TSubclassOf<UObject> Value);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsEnum(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, uint8 Value);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsFloat(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsInt(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int32 Value);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsName(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FName Value);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsObject(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UObject* Value);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsRotator(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FRotator Value);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsString(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FString Value);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SetBlackboardValueAsVector(UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FVector Value);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) static void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void StopUsingExternalEvent(UBTNode* NodeOwner);  // parameters 0x8
};
