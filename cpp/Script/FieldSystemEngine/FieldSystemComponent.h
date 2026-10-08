// /Script/FieldSystemEngine.FieldSystemComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x520, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemComponent.h

UCLASS(Config=Engine)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFieldSystem* FieldSystem;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere) bool bIsWorldField;  // 0x0458, size 0x1
    UPROPERTY(EditAnywhere) bool bIsChaosField;  // 0x0459, size 0x1
    UPROPERTY(EditAnywhere) TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;  // 0x0460, size 0x10
    UPROPERTY() FFieldObjectCommands ConstructionCommands;  // 0x0470, size 0x30
    UPROPERTY() FFieldObjectCommands BufferCommands;  // 0x04A0, size 0x30

    // Not reflected: the engine's scripting cannot see these.
    FChaosSolversModule * ChaosModule;  // 0x04D0, protected
    bool bHasPhysicsState;  // 0x04D8, protected
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> > SetupConstructionFields;  // 0x04E0, protected
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> > ChaosPersistentFields;  // 0x04F0, protected
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> > WorldGPUPersistentFields;  // 0x0500, protected
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> > WorldCPUPersistentFields;  // 0x0510, protected

    UFUNCTION(BlueprintCallable) void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void RemovePersistentFields();
    UFUNCTION(BlueprintCallable) void ResetFieldSystem();
};
