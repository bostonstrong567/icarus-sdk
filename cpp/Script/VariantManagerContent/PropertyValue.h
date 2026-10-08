// /Script/VariantManagerContent.PropertyValue
// Derives from: UObject
// size 0x1B8, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/PropertyValue.h

UCLASS()
class UPropertyValue : public UObject
{
public:
    UPROPERTY(Deprecated) TArray<FFieldPath> Properties;  // 0x0088, size 0x10
    UPROPERTY(Deprecated) TArray<int32> PropertyIndices;  // 0x0098, size 0x10
    UPROPERTY() TArray<FCapturedPropSegment> CapturedPropSegments;  // 0x00A8, size 0x10
    UPROPERTY() FString FullDisplayString;  // 0x00B8, size 0x10
    UPROPERTY() FName PropertySetterName;  // 0x00C8, size 0x8
    UPROPERTY() TMap<FString, FString> PropertySetterParameterDefaults;  // 0x00D0, size 0x50
    UPROPERTY() bool bHasRecordedData;  // 0x0120, size 0x1
    UPROPERTY(Deprecated) TSubclassOf<UObject> LeafPropertyClass;  // 0x0128, size 0x8
    UPROPERTY() TArray<uint8> ValueBytes;  // 0x0138, size 0x10
    UPROPERTY() EPropertyValueCategory PropCategory;  // 0x0148, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnPropertyApplied;  // 0x0028, protected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnPropertyRecorded;  // 0x0040, protected
    FProperty * LeafProperty;  // 0x0058, protected
    UStruct * ParentContainerClass;  // 0x0060, protected
    void * ParentContainerAddress;  // 0x0068, protected
    UObject * ParentContainerObject;  // 0x0070, protected
    uint8 * PropertyValuePtr;  // 0x0078, protected
    UFunction * PropertySetter;  // 0x0080, protected
    FFieldClass * LeafPropertyClass;  // 0x0130, protected
    TArray<unsigned char,TSizedDefaultAllocator<32> > DefaultValue;  // 0x0150, protected
    TSoftObjectPtr<UObject> TempObjPtr;  // 0x0160, protected
    FName TempName;  // 0x0188, protected
    FString TempStr;  // 0x0190, protected
    FText TempText;  // 0x01A0, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetFullDisplayString() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPropertyTooltip() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRecordedData() const;  // parameters 0x1

    // Virtual functions that start here:
    //   ApplyDataToResolvedObject, ApplyViaFunctionSetter, ContainsProperty, GetDataFromResolvedObject
    //   GetDefaultValue, GetObjectPropertyObjectClass, GetPropertyClass, GetPropertyParentContainerClass
    //   GetStructPropertyStruct, GetValueSizeInBytes, IsRecordedDataCurrent, RecordDataFromResolvedObject
    //   Resolve, SetRecordedData
};
