// /Script/FieldSystemEngine.FieldSystemMetaDataFilter
// Derives from: UFieldSystemMetaData > UActorComponent > UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

UCLASS(Config=Engine)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldFilterType> FilterType;  // 0x00B0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType);  // parameters 0x10
};
