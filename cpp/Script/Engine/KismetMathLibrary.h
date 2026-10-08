// /Script/Engine.KismetMathLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetMathLibrary.h

UCLASS()
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static float Abs(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Abs_Int(int32 A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Abs_Int64(int64 A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Acos(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Add_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime Add_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime Add_DateTimeTimespan(FDateTime A, FTimespan B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Add_FloatFloat(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Add_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Add_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Add_IntPointInt(FIntPoint A, int32 B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Add_IntPointIntPoint(FIntPoint A, FIntPoint B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Add_LinearColorLinearColor(FLinearColor A, FLinearColor B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Add_MatrixMatrix(const FMatrix& A, const FMatrix& B);  // parameters 0xC0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Add_QuatQuat(const FQuat& A, const FQuat& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan Add_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Add_Vector2DFloat(FVector2D A, float B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Add_Vector2DVector2D(FVector2D A, FVector2D B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Add_Vector4Vector4(const FVector4& A, const FVector4& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Add_VectorFloat(FVector A, float B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Add_VectorInt(FVector A, int32 B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Add_VectorVector(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 And_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 And_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Asin(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Atan(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Atan2(float Y, float X);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 BMax(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 BMin(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool BooleanAND(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool BooleanNAND(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool BooleanNOR(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool BooleanOR(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool BooleanXOR(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakColor(FLinearColor InColor, float& R, float& G, float& B, float& A);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakDateTime(FDateTime InDateTime, int32& Year, int32& Month, int32& Day, int32& Hour, int32& Minute, int32& Second, int32& Millisecond);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakFrameRate(const FFrameRate& InFrameRate, int32& Numerator, int32& Denominator);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakQualifiedFrameTime(const FQualifiedFrameTime& InFrameTime, FFrameNumber& Frame, FFrameRate& FrameRate, float& SubFrame);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRandomStream(const FRandomStream& InRandomStream, int32& InitialSeed);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRotator(FRotator InRot, float& Roll, float& Pitch, float& Yaw);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTimespan(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTimespan2(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& FractionNano);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTransform(const FTransform& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);  // parameters 0x54
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakVector(FVector InVec, float& X, float& Y, float& Z);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakVector2D(FVector2D InVec, float& X, float& Y);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakVector4(const FVector4& InVec, float& X, float& Y, float& Z, float& W);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor CInterpTo(FLinearColor Current, FLinearColor Target, float DeltaTime, float InterpSpeed);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Clamp(int32 Value, int32 Min, int32 Max);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D ClampAxes2D(FVector2D A, float MinAxisVal, float MaxAxisVal);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float ClampAxis(float Angle);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 ClampInt64(int64 Value, int64 Min, int64 Max);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector ClampVectorSize(FVector A, float Min, float Max);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ClassIsChildOf(TSubclassOf<UObject> TestClass, TSubclassOf<UObject> ParentClass);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator ComposeRotators(FRotator A, FRotator B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform ComposeTransforms(const FTransform& A, const FTransform& B);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Conv_BoolToByte(bool InBool);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Conv_BoolToFloat(bool InBool);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Conv_BoolToInt(bool InBool);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Conv_ByteToFloat(uint8 InByte);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Conv_ByteToInt(uint8 InByte);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Conv_ColorToLinearColor(FColor InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Conv_FloatToLinearColor(float InFloat);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Conv_FloatToVector(float InFloat);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Conv_Int64ToByte(int64 InInt);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Conv_Int64ToInt(int64 InInt);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Conv_IntPointToVector2D(FIntPoint InIntPoint);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Conv_IntToBool(int32 InInt);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Conv_IntToByte(int32 InInt);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Conv_IntToFloat(int32 InInt);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Conv_IntToInt64(int32 InInt);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntVector Conv_IntToIntVector(int32 InInt);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Conv_IntVectorToVector(const FIntVector& InIntVector);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FColor Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Conv_LinearColorToVector(FLinearColor InLinearColor);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Conv_MatrixToRotator(const FMatrix& InMatrix);  // parameters 0x4C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform Conv_MatrixToTransform(const FMatrix& InMatrix);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform Conv_RotatorToTransform(const FRotator& InRotator);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Conv_RotatorToVector(FRotator InRot);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Conv_TransformToMatrix(const FTransform& Transform);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Conv_Vector2DToIntPoint(FVector2D InVector2D);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Conv_Vector2DToVector(FVector2D InVector2D, float Z);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Conv_Vector4ToQuaternion(const FVector4& InVec);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Conv_Vector4ToRotator(const FVector4& InVec);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Conv_Vector4ToVector(const FVector4& InVector4);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Conv_VectorToLinearColor(FVector InVec);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Conv_VectorToQuaternion(FVector InVec);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Conv_VectorToRotator(FVector InVec);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform Conv_VectorToTransform(FVector InLocation);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Conv_VectorToVector2D(FVector InVector);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform ConvertTransformToRelative(const FTransform& Transform, const FTransform& ParentTransform);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Cos(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float CrossProduct2D(FVector2D A, FVector2D B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Cross_VectorVector(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DateTimeFromIsoString(FString IsoString, FDateTime& Result);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DateTimeFromString(FString DateTimeString, FDateTime& Result);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime DateTimeMaxValue();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime DateTimeMinValue();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 DaysInMonth(int32 Year, int32 Month);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 DaysInYear(int32 Year);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegAcos(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegAsin(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegAtan(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegAtan2(float Y, float X);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegCos(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegSin(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegTan(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DegreesToRadians(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Distance2D(FVector2D V1, FVector2D V2);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DistanceSquared2D(FVector2D V1, FVector2D V2);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Divide_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Divide_FloatFloat(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Divide_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Divide_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Divide_IntPointInt(FIntPoint A, int32 B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Divide_IntPointIntPoint(FIntPoint A, FIntPoint B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan Divide_TimespanFloat(FTimespan A, float Scalar);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Divide_Vector2DFloat(FVector2D A, float B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Divide_Vector2DVector2D(FVector2D A, FVector2D B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Divide_Vector4Vector4(const FVector4& A, const FVector4& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Divide_VectorFloat(FVector A, float B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Divide_VectorInt(FVector A, int32 B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Divide_VectorVector(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DotProduct2D(FVector2D A, FVector2D B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Dot_VectorVector(FVector A, FVector B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Ease(float A, float B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32 Steps);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_BoolBool(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_ClassClass(TSubclassOf<UObject> A, TSubclassOf<UObject> B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FloatFloat(float A, float B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_Int64Int64(int64 A, int64 B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_IntInt(int32 A, int32 B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);  // parameters 0x85
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_NameName(FName A, FName B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_ObjectObject(UObject* A, UObject* B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_QuatQuat(const FQuat& A, const FQuat& B, float Tolerance);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_TransformTransform(const FTransform& A, const FTransform& B);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualExactly_VectorVector(FVector A, FVector B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Equal_IntPointIntPoint(FIntPoint A, FIntPoint B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Exp(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 FCeil(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 FCeil64(float A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FClamp(float Value, float Min, float Max);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 FFloor(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 FFloor64(float A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FInterpEaseInOut(float A, float B, float Alpha, float Exponent);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FInterpTo_Constant(float Current, float Target, float DeltaTime, float InterpSpeed);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FMax(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FMin(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 FMod(float Dividend, float Divisor, float& Remainder);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 FTrunc(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 FTrunc64(float A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntVector FTruncVector(const FVector& InVector);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FWrap(float Value, float Min, float Max);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator FindLookAtRotation(const FVector& Start, const FVector& Target);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static void FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector& Segment1Point, FVector& Segment2Point);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static float FloatSpringInterp(float Current, float Target, FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Fraction(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan FromDays(float Days);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan FromHours(float Hours);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan FromMilliseconds(float Milliseconds);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan FromMinutes(float Minutes);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan FromSeconds(float Seconds);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D GetAbs2D(FVector2D A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetAbsMax2D(FVector2D A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetAxes(FRotator A, FVector& X, FVector& Y, FVector& Z);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetAzimuthAndElevation(FVector InDirection, const FTransform& ReferenceFrame, float& Azimuth, float& Elevation);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime GetDate(FDateTime A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetDay(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetDayOfYear(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetDays(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetDirectionUnitVector(FVector From, FVector To);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan GetDuration(FTimespan A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetForwardVector(FRotator InRot);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetHour(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetHour12(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetHours(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetMax2D(FVector2D A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetMaxElement(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMillisecond(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMilliseconds(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetMin2D(FVector2D A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetMinElement(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMinute(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMinutes(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMonth(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetPI();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetReflectionVector(FVector Direction, FVector SurfaceNormal);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetRightVector(FRotator InRot);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D GetRotated2D(FVector2D A, float AngleDeg);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetSecond(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetSeconds(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetSlopeDegreeAngles(const FVector& MyRightYAxis, const FVector& FloorNormal, const FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTAU();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan GetTimeOfDay(FDateTime A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTotalDays(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTotalHours(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTotalMilliseconds(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTotalMinutes(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetTotalSeconds(FTimespan A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetUpVector(FRotator InRot);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetVectorArrayAverage(const TArray<FVector>& Vectors);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetYawPitchFromVector(FVector InVec, float& Yaw, float& Pitch);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetYear(FDateTime A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GreaterEqual_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GreaterEqual_FloatFloat(float A, float B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GreaterEqual_Int64Int64(int64 A, int64 B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GreaterEqual_IntInt(int32 A, int32 B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GreaterGreater_VectorRotator(FVector A, FRotator B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Greater_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Greater_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Greater_FloatFloat(float A, float B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Greater_Int64Int64(int64 A, int64 B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Greater_IntInt(int32 A, int32 B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Greater_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GridSnap_Float(float Location, float GridSize);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor HSVToRGB(float H, float S, float V, float A);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor HSVToRGBLinear(FLinearColor HSV);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void HSVToRGB_Vector(FLinearColor HSV, FLinearColor& RGB);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Hypotenuse(float Width, float Height);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);  // parameters 0xF
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InRange_Int64Int64(int64 Value, int64 Min, int64 Max, bool InclusiveMin, bool InclusiveMax);  // parameters 0x1B
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool InRange_IntInt(int32 Value, int32 Min, int32 Max, bool InclusiveMin, bool InclusiveMax);  // parameters 0xF
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint IntPoint_Down();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint IntPoint_Left();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint IntPoint_One();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint IntPoint_Right();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint IntPoint_Up();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint IntPoint_Zero();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector InverseTransformDirection(const FTransform& T, FVector Direction);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector InverseTransformLocation(const FTransform& T, FVector Location);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator InverseTransformRotation(const FTransform& T, FRotator Rotation);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform InvertTransform(const FTransform& T);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsAfternoon(FDateTime A);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsLeapYear(int32 Year);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMorning(FDateTime A);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsNearlyZero2D(const FVector2D& A, float Tolerance);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsPointInBoxWithTransform(FVector Point, const FTransform& BoxWorldTransform, FVector BoxExtent);  // parameters 0x4D
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsZero2D(const FVector2D& A);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Lerp(float A, float B, float Alpha);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LessEqual_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LessEqual_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LessEqual_FloatFloat(float A, float B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LessEqual_Int64Int64(int64 A, int64 B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LessEqual_IntInt(int32 A, int32 B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LessEqual_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector LessLess_VectorRotator(FVector A, FRotator B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Less_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Less_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Less_FloatFloat(float A, float B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Less_Int64Int64(int64 A, int64 B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Less_IntInt(int32 A, int32 B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Less_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LinePlaneIntersection(const FVector& LineStart, const FVector& LineEnd, const FPlane& APlane, float& T, FVector& Intersection);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LinePlaneIntersection_OriginNormal(const FVector& LineStart, const FVector& LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float& T, FVector& Intersection);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColorLerp(FLinearColor A, FLinearColor B, float Alpha);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float Alpha);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Black();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Blue();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Desaturated(FLinearColor InColor, float InDesaturation);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float LinearColor_Distance(FLinearColor C1, FLinearColor C2);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float LinearColor_GetLuminance(FLinearColor InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float LinearColor_GetMax(FLinearColor InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float LinearColor_GetMin(FLinearColor InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Gray();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Green();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool LinearColor_IsNearEqual(FLinearColor A, FLinearColor B, float Tolerance);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static FColor LinearColor_Quantize(FLinearColor InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FColor LinearColor_QuantizeRound(FLinearColor InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Red();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void LinearColor_Set(FLinearColor& InOutColor, FLinearColor InColor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void LinearColor_SetFromHSV(FLinearColor& InOutColor, float H, float S, float V, float A);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void LinearColor_SetFromPow22(FLinearColor& InOutColor, const FColor& InColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void LinearColor_SetFromSRGB(FLinearColor& InOutColor, const FColor& InSRGB);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void LinearColor_SetRGBA(FLinearColor& InOutColor, float R, float G, float B, float A);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void LinearColor_SetRandomHue(FLinearColor& InOutColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void LinearColor_SetTemperature(FLinearColor& InOutColor, float InTemperature);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FColor LinearColor_ToRGBE(FLinearColor InLinearColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Transparent();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_White();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor LinearColor_Yellow();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Log(float A, float Base);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Loge(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBox MakeBox(FVector Min, FVector Max);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FBox2D MakeBox2D(FVector2D Min, FVector2D Max);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor MakeColor(float R, float G, float B, float A);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime MakeDateTime(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameRate MakeFrameRate(int32 Numerator, int32 Denominator);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlane MakePlaneFromPointAndNormal(FVector Point, FVector Normal);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQualifiedFrameTime MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRandomStream MakeRandomStream(int32 InitialSeed);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform MakeRelativeTransform(const FTransform& A, const FTransform& RelativeTo);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromX(const FVector& X);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromXY(const FVector& X, const FVector& Y);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromXZ(const FVector& X, const FVector& Z);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromY(const FVector& Y);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromYX(const FVector& Y, const FVector& X);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromYZ(const FVector& Y, const FVector& Z);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromZ(const FVector& Z);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromZX(const FVector& Z, const FVector& X);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotFromZY(const FVector& Z, const FVector& Y);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator MakeRotator(float Roll, float Pitch, float Yaw);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan MakeTimespan(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 Milliseconds);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan MakeTimespan2(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform MakeTransform(FVector Location, FRotator Rotation, FVector Scale);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector MakeVector(float X, float Y, float Z);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D MakeVector2D(float X, float Y);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 MakeVector4(float X, float Y, float Z, float W);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_ApplyScale(const FMatrix& M, float Scale);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_ConcatenateTranslation(const FMatrix& M, FVector Translation);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_ContainsNaN(const FMatrix& M);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_GetColumn(const FMatrix& M, TEnumAsByte<EMatrixColumns> Column);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Matrix_GetDeterminant(const FMatrix& M);  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_GetFrustumBottomPlane(const FMatrix& M, FPlane& OutPlane);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_GetFrustumFarPlane(const FMatrix& M, FPlane& OutPlane);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_GetFrustumLeftPlane(const FMatrix& M, FPlane& OutPlane);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_GetFrustumNearPlane(const FMatrix& M, FPlane& OutPlane);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_GetFrustumRightPlane(const FMatrix& M, FPlane& OutPlane);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Matrix_GetFrustumTopPlane(const FMatrix& M, FPlane& OutPlane);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_GetInverse(const FMatrix& M);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_GetMatrixWithoutScale(const FMatrix& M, float Tolerance);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Matrix_GetMaximumAxisScale(const FMatrix& M);  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_GetOrigin(const FMatrix& InMatrix);  // parameters 0x4C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Matrix_GetRotDeterminant(const FMatrix& M);  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Matrix_GetRotator(const FMatrix& M);  // parameters 0x4C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_GetScaleVector(const FMatrix& M, float Tolerance);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Matrix_GetScaledAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);  // parameters 0x64
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_GetScaledAxis(const FMatrix& M, TEnumAsByte<EAxis> Axis);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_GetTransposeAdjoint(const FMatrix& M);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_GetTransposed(const FMatrix& M);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Matrix_GetUnitAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);  // parameters 0x64
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_GetUnitAxis(const FMatrix& M, TEnumAsByte<EAxis> Axis);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_Identity();  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_InverseTransformPosition(const FMatrix& M, FVector V);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Matrix_InverseTransformVector(const FMatrix& M, FVector V);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_Mirror(const FMatrix& M, TEnumAsByte<EAxis> MirrorAxis, TEnumAsByte<EAxis> FlipAxis);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void Matrix_RemoveScaling(FMatrix& M, float Tolerance);  // parameters 0x44
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_RemoveTranslation(const FMatrix& M);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Matrix_ScaleTranslation(const FMatrix& M, FVector Scale3D);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void Matrix_SetAxis(FMatrix& M, TEnumAsByte<EAxis> Axis, FVector AxisVector);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void Matrix_SetColumn(FMatrix& M, TEnumAsByte<EMatrixColumns> Column, FVector Value);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void Matrix_SetOrigin(FMatrix& M, FVector NewOrigin);  // parameters 0x4C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Matrix_ToQuat(const FMatrix& M);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Matrix_TransformPosition(const FMatrix& M, FVector V);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Matrix_TransformVector(const FMatrix& M, FVector V);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Matrix_TransformVector4(const FMatrix& M, FVector4 V);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Max(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 MaxInt64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MaxOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMaxValue, uint8& MaxValue);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Min(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 MinInt64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MinOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMinValue, uint8& MinValue);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void MinimumAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);  // parameters 0x45
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector MirrorVectorByNormal(FVector InVect, FVector InNormal);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MultiplyByPi(float Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MultiplyMultiply_FloatFloat(float Base, float Exp);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Multiply_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Multiply_FloatFloat(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Multiply_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Multiply_IntFloat(int32 A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Multiply_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Multiply_IntPointInt(FIntPoint A, int32 B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Multiply_LinearColorFloat(FLinearColor A, float B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Multiply_MatrixFloat(const FMatrix& A, float B);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatrix Multiply_MatrixMatrix(const FMatrix& A, const FMatrix& B);  // parameters 0xC0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Multiply_QuatQuat(const FQuat& A, const FQuat& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Multiply_RotatorFloat(FRotator A, float B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Multiply_RotatorInt(FRotator A, int32 B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan Multiply_TimespanFloat(FTimespan A, float Scalar);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Multiply_Vector2DFloat(FVector2D A, float B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Multiply_Vector2DVector2D(FVector2D A, FVector2D B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Multiply_Vector4Vector4(const FVector4& A, const FVector4& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Multiply_VectorFloat(FVector A, float B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Multiply_VectorInt(FVector A, int32 B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Multiply_VectorVector(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NearlyEqual_TransformTransform(const FTransform& A, const FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);  // parameters 0x6D
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator NegateRotator(FRotator A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector NegateVector(FVector A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Negated2D(const FVector2D& A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Normal(FVector A, float Tolerance);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Normal2D(FVector2D A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D NormalSafe2D(FVector2D A, float Tolerance);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void Normalize2D(FVector2D& A, float Tolerance);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float NormalizeAxis(float Angle);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float NormalizeToRange(float Value, float RangeMin, float RangeMax);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator NormalizedDeltaRotator(FRotator A, FRotator B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqualExactly_VectorVector(FVector A, FVector B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_BoolBool(bool A, bool B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_ClassClass(TSubclassOf<UObject> A, TSubclassOf<UObject> B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FloatFloat(float A, float B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_Int64Int64(int64 A, int64 B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_IntInt(int32 A, int32 B);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);  // parameters 0x85
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_NameName(FName A, FName B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_ObjectObject(UObject* A, UObject* B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_QuatQuat(const FQuat& A, const FQuat& B, float ErrorTolerance);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);  // parameters 0x25
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Not_Int(int32 A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Not_Int64(int64 A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Not_PreBool(bool A);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime Now();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Or_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Or_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Percent_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Percent_FloatFloat(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Percent_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float PerlinNoise1D(float Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool PointsAreCoplanar(const TArray<FVector>& Points, float Tolerance);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector ProjectVectorOnToPlane(FVector V, FVector PlaneNormal);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector ProjectVectorOnToVector(FVector V, FVector Target);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Quat_AngularDistance(const FQuat& A, const FQuat& B);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void Quat_EnforceShortestArcWith(FQuat& A, const FQuat& B);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_Euler(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Quat_Exp(const FQuat& Q);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Quat_GetAngle(const FQuat& Q);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_GetAxisX(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_GetAxisY(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_GetAxisZ(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_GetRotationAxis(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Quat_Identity();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Quat_Inversed(const FQuat& Q);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Quat_IsFinite(const FQuat& Q);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Quat_IsIdentity(const FQuat& Q, float Tolerance);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Quat_IsNonFinite(const FQuat& Q);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Quat_IsNormalized(const FQuat& Q);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Quat_Log(const FQuat& Q);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Quat_MakeFromEuler(const FVector& Euler);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Quat_Normalize(FQuat& Q, float Tolerance);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Quat_Normalized(const FQuat& Q, float Tolerance);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_RotateVector(const FQuat& Q, const FVector& V);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator Quat_Rotator(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void Quat_SetComponents(FQuat& Q, float X, float Y, float Z, float W);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Quat_SetFromEuler(FQuat& Q, const FVector& Euler);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Quat_Size(const FQuat& Q);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Quat_SizeSquared(const FQuat& Q);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_UnrotateVector(const FQuat& Q, const FVector& V);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_VectorForward(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_VectorRight(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Quat_VectorUp(const FQuat& Q);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator REase(FRotator A, FRotator B, float Alpha, bool bShortestPath, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32 Steps);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor RGBLinearToHSV(FLinearColor RGB);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void RGBToHSV(FLinearColor InColor, float& H, float& S, float& V, float& A);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void RGBToHSV_Vector(FLinearColor RGB, FLinearColor& HSV);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator RInterpTo(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator RInterpTo_Constant(FRotator Current, FRotator Target, float DeltaTime, float InterpSpeed);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator RLerp(FRotator A, FRotator B, float Alpha, bool bShortestPath);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float RadiansToDegrees(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool RandomBool();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool RandomBoolFromStream(const FRandomStream& Stream);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool RandomBoolWithWeight(float Weight);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool RandomBoolWithWeightFromStream(float Weight, const FRandomStream& RandomStream);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static float RandomFloat();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static float RandomFloatFromStream(const FRandomStream& Stream);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float RandomFloatInRange(float Min, float Max);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float RandomFloatInRangeFromStream(float Min, float Max, const FRandomStream& Stream);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 RandomInteger(int32 Max);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 RandomInteger64(int64 Max);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 RandomInteger64InRange(int64 Min, int64 Max);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 RandomIntegerFromStream(int32 Max, const FRandomStream& Stream);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 RandomIntegerInRange(int32 Min, int32 Max);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 RandomIntegerInRangeFromStream(int32 Min, int32 Max, const FRandomStream& Stream);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomPointInBoundingBox(FVector Origin, FVector BoxExtent);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator RandomRotator(bool bRoll);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator RandomRotatorFromStream(bool bRoll, const FRandomStream& Stream);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVector();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorFromStream(const FRandomStream& Stream);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInConeInDegreesFromStream(const FVector& ConeDir, float ConeHalfAngleInDegrees, const FRandomStream& Stream);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInConeInRadiansFromStream(const FVector& ConeDir, float ConeHalfAngleInRadians, const FRandomStream& Stream);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const FRandomStream& Stream);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const FRandomStream& Stream);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void ResetFloatSpringState(FFloatSpringState& SpringState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ResetRandomStream(const FRandomStream& Stream);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ResetVectorSpringState(FVectorSpringState& SpringState);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator RotatorFromAxisAndAngle(FVector Axis, float Angle);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Round(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Round64(float A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float SafeDivide(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SeedRandomStream(FRandomStream& Stream);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSubclassOf<UObject> SelectClass(TSubclassOf<UObject> A, TSubclassOf<UObject> B, bool bSelectA);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor SelectColor(FLinearColor A, FLinearColor B, bool bPickA);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static float SelectFloat(float A, float B, bool bPickA);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 SelectInt(int32 A, int32 B, bool bPickA);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* SelectObject(UObject* A, UObject* B, bool bSelectA);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator SelectRotator(FRotator A, FRotator B, bool bPickA);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString SelectString(FString A, FString B, bool bPickA);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform SelectTransform(const FTransform& A, const FTransform& B, bool bPickA);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector SelectVector(FVector A, FVector B, bool bPickA);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void Set2D(FVector2D& A, float X, float Y);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetRandomStreamSeed(FRandomStream& Stream, int32 NewSeed);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float SignOfFloat(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 SignOfInteger(int32 A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 SignOfInteger64(int64 A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Sin(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Spherical2DToUnitCartesian(FVector2D A);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Sqrt(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Square(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 Subtract_ByteByte(uint8 A, uint8 B);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan Subtract_DateTimeDateTime(FDateTime A, FDateTime B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime Subtract_DateTimeTimespan(FDateTime A, FTimespan B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Subtract_FloatFloat(float A, float B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Subtract_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Subtract_IntInt(int32 A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Subtract_IntPointInt(FIntPoint A, int32 B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FIntPoint Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FLinearColor Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FQuat Subtract_QuatQuat(const FQuat& A, const FQuat& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan Subtract_TimespanTimespan(FTimespan A, FTimespan B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Subtract_Vector2DFloat(FVector2D A, float B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Subtract_Vector2DVector2D(FVector2D A, FVector2D B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Subtract_Vector4Vector4(const FVector4& A, const FVector4& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Subtract_VectorFloat(FVector A, float B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Subtract_VectorInt(FVector A, int32 B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Subtract_VectorVector(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform TEase(const FTransform& A, const FTransform& B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32 Steps);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform TInterpTo(const FTransform& Current, const FTransform& Target, float DeltaTime, float InterpSpeed);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform TLerp(const FTransform& A, const FTransform& B, float Alpha, TEnumAsByte<ELerpInterpolationMode> InterpMode);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Tan(float A);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool TimespanFromString(FString TimespanString, FTimespan& Result);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan TimespanMaxValue();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan TimespanMinValue();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float TimespanRatio(FTimespan A, FTimespan B);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimespan TimespanZeroValue();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static void ToDirectionAndLength2D(FVector2D A, FVector2D& OutDir, float& OutLength);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D ToRounded2D(FVector2D A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D ToSign2D(FVector2D A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime Today();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector TransformDirection(const FTransform& T, FVector Direction);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector TransformLocation(const FTransform& T, FVector Location);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator TransformRotation(const FTransform& T, FRotator Rotation);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 TransformVector4(const FMatrix& Matrix, const FVector4& Vec4);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Transform_Determinant(const FTransform& Transform);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDateTime UtcNow();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector VEase(FVector A, FVector B, float Alpha, TEnumAsByte<EEasingFunc> EasingFunc, float BlendExp, int32 Steps);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector VInterpTo(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector VInterpTo_Constant(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector VLerp(FVector A, FVector B, float Alpha);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static float VSize(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float VSize2D(FVector2D A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float VSize2DSquared(FVector2D A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float VSizeSquared(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float VSizeXY(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float VSizeXYSquared(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Vector2DInterpTo(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Vector2DInterpTo_Constant(FVector2D Current, FVector2D Target, float DeltaTime, float InterpSpeed);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Vector2D_One();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Vector2D_Unit45Deg();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Vector2D_Zero();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void Vector4_Assign(FVector4& A, const FVector4& InVector);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Vector4_CrossProduct3(const FVector4& A, const FVector4& B);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector4_DotProduct(const FVector4& A, const FVector4& B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector4_DotProduct3(const FVector4& A, const FVector4& B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector4_IsNAN(const FVector4& A);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector4_IsNearlyZero3(const FVector4& A, float Tolerance);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector4_IsNormal3(const FVector4& A);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector4_IsUnit3(const FVector4& A, float SquaredLenthTolerance);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector4_IsZero(const FVector4& A);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Vector4_MirrorByVector3(const FVector4& Direction, const FVector4& SurfaceNormal);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Vector4_Negated(const FVector4& A);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Vector4_Normal3(const FVector4& A, float Tolerance);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Vector4_NormalUnsafe3(const FVector4& A);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Vector4_Normalize3(FVector4& A, float Tolerance);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void Vector4_Set(FVector4& A, float X, float Y, float Z, float W);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector4_Size(const FVector4& A);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector4_Size3(const FVector4& A);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector4_SizeSquared(const FVector4& A);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector4_SizeSquared3(const FVector4& A);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector4 Vector4_Zero();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FVector VectorSpringInterp(FVector Current, FVector Target, FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);  // parameters 0x4C
    UFUNCTION(BlueprintCallable) static void Vector_AddBounded(FVector& A, FVector InAddVect, float InRadius);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void Vector_Assign(FVector& A, const FVector& InVector);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Backward();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_BoundedToBox(FVector InVect, FVector InBoxMin, FVector InBoxMax);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_BoundedToCube(FVector InVect, float InRadius);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ClampSize2D(FVector A, float Min, float Max);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ClampSizeMax(FVector A, float Max);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ClampSizeMax2D(FVector A, float Max);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ComponentMax(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ComponentMin(FVector A, FVector B);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_CosineAngle2D(FVector A, FVector B);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_Distance(FVector V1, FVector V2);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_Distance2D(FVector V1, FVector V2);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_Distance2DSquared(FVector V1, FVector V2);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_DistanceSquared(FVector V1, FVector V2);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Down();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Forward();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_GetAbs(FVector A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_GetAbsMax(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_GetAbsMin(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_GetProjection(FVector A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_GetSignVector(FVector A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Vector_HeadingAngle(FVector A);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector_IsNAN(const FVector& A);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector_IsNearlyZero(const FVector& A, float Tolerance);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector_IsNormal(const FVector& A);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector_IsUniform(const FVector& A, float Tolerance);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector_IsUnit(const FVector& A, float SquaredLenthTolerance);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool Vector_IsZero(const FVector& A);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Left();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_MirrorByPlane(FVector A, const FPlane& InPlane);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Normal2D(FVector A, float Tolerance);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_NormalUnsafe(const FVector& A);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void Vector_Normalize(FVector& A, float Tolerance);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_One();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ProjectOnToNormal(FVector V, FVector InNormal);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Reciprocal(const FVector& A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Right();  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void Vector_Set(FVector& A, float X, float Y, float Z);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_SnappedToGrid(FVector InVect, float InGridSize);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ToDegrees(FVector A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_ToRadians(FVector A);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector2D Vector_UnitCartesianToSpherical(FVector A);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void Vector_UnwindEuler(FVector& A);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Up();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector Vector_Zero();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRotator WeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float Weight);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector WeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float Weight);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Wrap(int32 Value, int32 Min, int32 Max);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 Xor_Int64Int64(int64 A, int64 B);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Xor_IntInt(int32 A, int32 B);  // parameters 0xC
};
