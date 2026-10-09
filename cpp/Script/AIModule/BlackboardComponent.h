// /Script/AIModule.BlackboardComponent
// Derives from: UActorComponent > UObject
// size 0x1B8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h

UCLASS(Config=Engine)
class UBlackboardComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient, Instanced) UBrainComponent* BrainComp;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) UBlackboardData* DefaultBlackboardAsset;  // 0x00B8, size 0x8
    UPROPERTY(Transient) UBlackboardData* BlackboardAsset;  // 0x00C0, size 0x8
    TArray<unsigned char,TSizedDefaultAllocator<32> > ValueMemory;  // 0x00C8, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > ValueOffsets;  // 0x00D8, not reflected
    UPROPERTY(Transient) TArray<UBlackboardKeyType*> KeyInstances;  // 0x00E8, size 0x10
    int32 NotifyObserversRecursionCount;  // 0x00F8, not reflected
    int32 ObserversToRemoveCount;  // 0x00FC, not reflected
    TMultiMap<unsigned char,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned char,UBlackboardComponent::FOnBlackboardChangeNotificationInfo,1> > Observers;  // 0x0100, not reflected
    TMultiMap<UObject *,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,FDelegateHandle,1> > ObserverHandles;  // 0x0150, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > QueuedUpdates;  // 0x01A0, not reflected
    uint32 : 1 bPausedNotifies;  // 0x01B0, not reflected
    uint32 : 1 bSynchronizedKeyPopulated;  // 0x01B0, not reflected
public:
    UFUNCTION(BlueprintCallable) void ClearValue(const FName& KeyName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetValueAsBool(const FName& KeyName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) TSubclassOf<UObject> GetValueAsClass(const FName& KeyName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) uint8 GetValueAsEnum(const FName& KeyName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetValueAsFloat(const FName& KeyName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetValueAsInt(const FName& KeyName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetValueAsName(const FName& KeyName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UObject* GetValueAsObject(const FName& KeyName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetValueAsRotator(const FName& KeyName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetValueAsString(const FName& KeyName) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetValueAsVector(const FName& KeyName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVectorValueSet(const FName& KeyName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetValueAsBool(const FName& KeyName, bool BoolValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetValueAsClass(const FName& KeyName, TSubclassOf<UObject> ClassValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetValueAsEnum(const FName& KeyName, uint8 EnumValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetValueAsFloat(const FName& KeyName, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetValueAsInt(const FName& KeyName, int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetValueAsName(const FName& KeyName, FName NameValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetValueAsObject(const FName& KeyName, UObject* ObjectValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetValueAsRotator(const FName& KeyName, FRotator VectorValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetValueAsString(const FName& KeyName, FString StringValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetValueAsVector(const FName& KeyName, FVector VectorValue);  // parameters 0x14
};
