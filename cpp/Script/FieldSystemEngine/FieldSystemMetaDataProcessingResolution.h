// /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Derives from: UFieldSystemMetaData > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldResolutionType> ResolutionType;  // 0x00B0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType);  // parameters 0x10
};
